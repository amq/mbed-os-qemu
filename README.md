### Getting started

1. Install:
- [ARM Toolchain](http://gnuarmeclipse.github.io/toolchain/install/)
- [Eclipse CDT](https://eclipse.org/cdt/)
- [GNU ARM plugins](https://gnuarmeclipse.github.io/plugins/install/) from the Eclipse Marketplace
- [GNU ARM Eclipse QEMU](https://gnuarmeclipse.github.io/qemu/)
- [mbed-cli](https://github.com/ARMmbed/mbed-cli)

2. Clone this repo and cd there

```
git clone https://github.com/amq/mbed-os-qemu
cd mbed-os-qemu
```

3. Download mbed-os and the libraries

```
mbed update
```

4. Export an Eclipse project

```
mbed export -i gnuarmeclipse -m DISCO_F429ZI
```

5. Import `mbed-os-qemu` in Eclipse using `File - Import - General - Existing Projects into Workspace`
6. Configure the QEMU path in `Window - Preferences - Run/Debug - QEMU`
7. Start debugging using the `mbed-os-qemu Debug` configuration

### Known issues

Safe to ignore:
- `M profile return from interrupt with misaligned PC is UNPREDICTABLE`
- `Unresolved inclusion: <Debug\mbed-config.h>`

Limitations of QEMU:
- Floating Point Unit is not supported

Other:
- `printf` is not supported
