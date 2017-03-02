# mbed.js wrapper for ChainableLED

JS on mbed driver for the Grove ChainableLED, based on [Jackson_lv/ChainableLED](https://developer.mbed.org/users/Jackson_lv/code/ChainableLED).

This wrapper was generated via [mbed-js-wrapper-generator](https://github.com/janjongboom/mbed-js-wrapper-generator).

## Usage

1. In your [Gulp-based mbed.js project](https://github.com/ARMmbed/mbed-js-example), run:

    ```
    $ npm install mbed-js-chainableled --save
    ```

1. Go into the chainableled folder and install the native library:

    ```
    $ cd node_modules/mbed-js-chainableled
    $ mbed add $(cat ChainableLED.lib)
    $ cd ../..
    ```

1. Clear your build directory:

    ```
    $ rm -r build/out
    ```

1. Use the library via:

    ```js
    var led = ChainableLED(D5, D6, 1);
    var ix = 0;

    setInterval(function() {
        if (++ix % 2 == 1) {
            led.setColorRGB(0, 255, 0, 0);
        }
        else {
            led.setColorRGB(0, 0, 255, 0);
        }
    }, 1000);
    ```
