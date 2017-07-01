### Getting started

1. Install [Eclipse CDT](https://eclipse.org/cdt/) and [GNU ARM plugins](http://gnuarmeclipse.github.io) from Marketplace
2. Install [mbed-cli](https://github.com/ARMmbed/mbed-cli)

```
pip install mbed-cli
```

3. Clone this repo and cd there

```
git clone https://github.com/amq/mbed-os-qemu
cd mbed-os-qemu
```

4. Download mbed-os

```
mbed update
```

5. Export an Eclipse project

```
mbed export -i gnuarmeclipse -m DISCO_F407VG
```

6. Import `mbed-os-qemu` in Eclipse using `File - Import - General - Existing Projects into Workspace`
7. Start debugging using the `mbed-os-qemu Debug` configuration

### Known issues

Safe to ignore:
- `M profile return from interrupt with misaligned PC is UNPREDICTABLE`
- `Unresolved inclusion: <Debug\mbed-config.h>`

Limitations of QEMU:
- Floating Point Unit is not supported