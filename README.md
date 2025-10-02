# QOpenHD Kernel Library

QOpenHD stripped from QT.

This is not an official project.

Please refer to the original project here [QOpenHD](https://github.com/OpenHD/QOpenHD)

This project can be used to use the client side, receiving telemetry and videostream on other platform than QT.

### Dependencies

Install dev libraries from those dependencies:

```
libavcodec
libavformat
libavutil
egl
opengl
```

### Compilation 

Prepare meson project:
`meson setup buildir`

Compile meson project
`meson compile -C builddir`

### Configuration

A configuration file in the form of a java properties file has been added ./conf/openhd_config.properties
You need to export `OPENHD_PROPERTIES_PATH` env variable to point to the 'conf' folder.

### Run

`./buildir/test_rtp`


TODO:
- Test other platform than Linux.
- WIP - handle a simple example of connecting SDL2 to display the GL buffer.
- Formalize callback mechanisms to connect a UI
- Cleaning unnecessary code.