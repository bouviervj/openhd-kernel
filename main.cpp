
#include <iostream>
#include <telemetry/MavlinkTelemetry.h>
#include <videostreaming/avcodec/avcodec_decoder.h>
#include <videostreaming/avcodec/texturerenderer.h>

#include <unistd.h>

#include <SDL2/SDL.h>
#include <SDL2/SDL_opengl.h>

// Program variables
SDL_Window* window = nullptr;
SDL_GLContext glContext;

void open_sdl2_window(){
    SDL_Init(SDL_INIT_VIDEO);

    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MAJOR_VERSION, 3); // For OpenGL ES 3.0
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_MINOR_VERSION, 0);
    SDL_GL_SetAttribute(SDL_GL_CONTEXT_PROFILE_MASK, SDL_GL_CONTEXT_PROFILE_ES); // Specify OpenGL ES profile
    // Other attributes like depth buffer, stencil buffer, etc. can also be set here
    SDL_GL_SetAttribute(SDL_GL_DOUBLEBUFFER, 1);
    //SDL_GL_SetAttribute(SDL_GL_DEPTH_SIZE, 24);

    window = SDL_CreateWindow("SDL2 OpenHD Client Window",
                                SDL_WINDOWPOS_UNDEFINED,
                                SDL_WINDOWPOS_UNDEFINED,
                                800, 600,
                                SDL_WINDOW_OPENGL | SDL_WINDOW_SHOWN);

    glContext = SDL_GL_CreateContext(window);

    // 5. Make the context current
    if (SDL_GL_MakeCurrent(window, glContext) < 0) {
        std::cerr << "SDL_GL_MakeCurrent failed" << std::endl;
        assert(0);
    }
}

void close_sdl2_window(){
    SDL_GL_DeleteContext(glContext);
    SDL_DestroyWindow(window);
    SDL_Quit();
}

int main() {

    open_sdl2_window();

    Size viewportSize;
    viewportSize.width=800;
    viewportSize.height=600;
    TextureRenderer::instance().initGL();
    TextureRenderer::instance().setViewportSize(viewportSize);

    std::cout << "Starting OpenHD connection:" << std::endl;

    MavlinkTelemetry::instance().start();

    auto decoder = AVCodecDecoder();

    decoder.init(true);

    // Application loop
    bool running = true;
    SDL_Event event;
    while (running) {
        while (SDL_PollEvent(&event)) {
            if (event.type == SDL_QUIT) {
                running = false;
            }
        }

        glClearColor(0.2f, 0.3f, 0.3f, 1.0f); // Set background color
        glClear(GL_COLOR_BUFFER_BIT | GL_DEPTH_BUFFER_BIT);
        glViewport(0, 0, viewportSize.width, viewportSize.height);

        TextureRenderer::instance().paint(0);

        SDL_GL_SwapWindow(window);
    }

    MavlinkTelemetry::instance().terminate();

    close_sdl2_window();

    return 0;
}