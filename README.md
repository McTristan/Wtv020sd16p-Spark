Wtv020sd16p-Spark
=================

A Spark Core port of the Wtv020sd16p library for Arduino by Diego J. Arevalo.

Library to control a WTV020-SD-16P module to play voices from an Spark Core board.
 Created by Diego J. Arevalo, August 6th, 2012.
 Modifed by Ryszard Malinowski November 30, 2014.
 Ported to Spark Core by Sandro Lange, January 3th, 2015
 
 Released into the public domain.
 
 Changes:
 V1.0 - Original library written by Diego J. Arevalo
 V1.1 - Changes by Ryszard Malinowski:
        1. Add "delayMicros" function execute exact delay from the last call
        2. Fix clock timing in "setCommand" function
        3. Add "setVolume" function
        4. Fix "unmute" function to restore original volume
 V1.2 - ported to a Spark Core library