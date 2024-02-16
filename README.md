# Save for Web plug-in for The GIMP

The GIMP registry was abandoned years ago, and in 2018 (+-) they took down the site completely. Unfortunately that also meant that access to third party plugins also died.

This is a historical copy of the "Save for Web" plug-in for GIMP (found on [web.archive.org](https://web.archive.org/web/20160523004332/http://registry.gimp.org/node/33)). For personal use I have made with one minor alteration - to set the maximum image size from 2048px to 8192px.

---

Save for Web plug-ins allows to experiment with various popular web format
options. It shows an automatically updated preview and file size statistics.

## Requirements

- `libgimp2.0-dev`
- `intltool`

These requirements can be uninstalled once youre complete.

### Install

To build and install it, you just ...

```shell
./configure
make
make install
```
 ... and it's there.
 
