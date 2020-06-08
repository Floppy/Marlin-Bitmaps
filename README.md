# Marlin Bitmaps

[Marlin](https://github.com/MarlinFirmware/Marlin) lets you add custom graphics for your 3d printer's boot and status screens. You can generate your own using the [online conversion tool](https://marlinfw.org/tools/u8glib/converter.html), but where can you find ones that people have already made?

This repository is an attempt to create an archive of boot and status graphics for use with Marlin 2.x.

## Contributing

Pull requests are welcomed:

  * Fork the repository
  * Please add your Marlin 2 compatible header file to the appropriate directory with a unique name
  * Commit the files and open a [new pull request](https://github.com/Floppy/Marlin-Bitmaps/pulls)
  * Include an image of the resulting display in the PR
  * If you can, include an ASCII Art version of the image in the code - the generator tool can do this for you.

By submitting a PR, you agree that your file can be released under the MIT open source license, and can be reused for any purpose without restriction.

No offensive or NSFW images will be accepted. See CODE_OF_CONDUCT.md for more information.

## Usage

Copy the file you want to `Marlin/_Bootscreen.h` or `Marlin/_Statusscreen.h` as appropriate. See https://marlinfw.org/docs/configuration/configuration.html#firmware-info for more details.

If you are using Marlin 1.x, you may need to convert the files to work. You can paste the content into https://marlinfw.org/tools/u8glib/converter.html to do this.
