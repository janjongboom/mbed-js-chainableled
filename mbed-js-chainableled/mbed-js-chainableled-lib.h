/* Generated by https://github.com/janjongboom/mbed-js-wrapper-generator */

#ifndef _JERRYSCRIPT_MBED_LIB_CHAINABLELED_H
#define _JERRYSCRIPT_MBED_LIB_CHAINABLELED_H

#include "ChainableLED.h"

#include "mbed-js-chainableled/mbed-js-chainableled.h"
#include "jerryscript-mbed-library-registry/wrap_tools.h"

void mbed_js_chainableled_setup();
static jerry_value_t mbed_js_wrap_native_object(ChainableLED* ptr);

DECLARE_JS_WRAPPER_REGISTRATION (chainableled)
{
    REGISTER_CLASS_CONSTRUCTOR(ChainableLED);
    mbed_js_chainableled_setup();
}

#endif // _JERRYSCRIPT_MBED_LIB_CHAINABLELED_H
