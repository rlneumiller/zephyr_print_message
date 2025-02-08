# zephyr_print_message/README.md

# Zephyr print_message project

This project implements a simple application using the Zephyr RTOS that formats and prints messages with aligned line breaks after `\n`. The application utilizes ANSI escape codes for colored output.
I use this to help me visually parse console output.

## Project Structure

```
zephyr_print_message
├── CMakeLists.txt
├── images
│   └── screenshot_01.png
├── LICENSE
├── prj.conf
├── README.md
└── src
    ├── main.c
    ├── print_message.c
    └── print_message.h
```

## Building the Project

To build the project, ensure you have the Zephyr development environment set up. Then, navigate to ${ZEPHYR_BASE} and run:

```bash
west build -b <board_name> /path/to/zephyr_print_message
```

Replace `<board_name>` with the target board (or utilize one of the other options for defining the board).

## Running the Application

After building the project, you can run the application on your target hardware using:

```bash
west flash
or if using an espressif based device
west flash --esp-device <serial_port>
```

## Usage

The application formats messages with the prefix zephyr_helper: ' and uses `\n` characters for line breaks. For example, calling the `print_message` function with the string `"Hello World! %s\n, CONFIG_BOARD_TARGET\nThis is a longer message"` will output:

```c
print_message("Hello World! %s\n, CONFIG_BOARD_TARGET\nThis is a longer message");
```

Will output:

```
zephyr_helper: Hello World! <board_name>
               This is a longer message
```

![Screenshot displaying console output.](/images/screenshot_01.png "Console output.")

## License

This project is licensed under the MIT License. See the LICENSE file for more details.
