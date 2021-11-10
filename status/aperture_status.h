/**
 * Made with Marlin Bitmap Converter
 * https://marlinfw.org/tools/u8glib/converter.html
 *
 * This bitmap from the file 'ApertureStatus-2.png'
 */
 /**
 * The Aperture Laboratories Logo is owned and copyrighted by Valve, Inc and
 * was adapted into this form by Kyle (Tony) Kuhn.
**/
#pragma once

#define STATUS_LOGO_WIDTH 24

const unsigned char status_logo_bmp[] PROGMEM = {
  0x00,0x0C,0x00, // ............##..........
  0x00,0x7F,0x00, // .........#######........
  0x01,0xBF,0xA0, // .......##.#######.#.....
  0x07,0xCF,0xB0, // .....#####..#####.##....
  0x0F,0xF7,0xB8, // ....########.####.###...
  0x1F,0xFB,0xB8, // ...##########.###.###...
  0x3C,0x00,0xBC, // ..####..........#.####..
  0x23,0x00,0x3E, // ..#...##..........#####.
  0x1E,0x00,0x3E, // ...####...........#####.
  0x7C,0x00,0x3D, // .#####............####.#
  0x7C,0x00,0x1B, // .#####.............##.##
  0x78,0x00,0x1B, // .####..............##.##
  0xF4,0x00,0x17, // ####.#.............#.###
  0xEC,0x00,0x0F, // ###.##..............####
  0x6C,0x00,0x0F, // .##.##..............####
  0x5C,0x00,0x1F, // .#.###.............#####
  0x3C,0x00,0x1E, // ..####.............####.
  0x3D,0x00,0x30, // ..####.#..........##....
  0x1D,0x80,0x0C, // ...###.##...........##..
  0x1D,0xCF,0xF8, // ...###.###..#########...
  0x0E,0xF3,0xF8, // ....###.####..#######...
  0x02,0xFD,0xE0, // ......#.######.####.....
  0x02,0xFE,0xC0, // ......#.#######.##......
  0x00,0x7E,0x00  // .........######.........
};
