# Delusional
 12.75U PCB for Winnie.

 A TKL inspired 12.75U Keyboard PCB. This design has not yet been prototyped. 
 
 To do: 
 
 1. Add split spacebar layout and generate new production files. Why did you decide to add this the day after ordering protos Winnie?
 2. Do some cool silk art.
 3. Clean up this shitty readme.
 4. Clean up Kicad files.
 
 ## Introduction
 
 The goal of this project is to:
 1. Provide a PCB for a !TKL-like Minivan, the spacing between the F-Row, Navigation & Arrow Cluster is 0.375U.
 2. Accent LED in the specified location above the right arrow key.
 3. Use a level shifter.
 
 ## Layout
 
 <img src="https://github.com/dmfarah/Delusional/blob/main/KLE/Delusional%20KLE.png?raw=true" width="600px"/>
 
 The thought process behind these decisions are as follows:
 1. Identical spacing between separated clusters.
 2. WKL (1U blockers) with 1U Alt keys flanking a 6.25U spacebar.

 ## Features
 
 <img src="https://github.com/dmfarah/Delusional/blob/main/KLE/Delusional%203D%20Viewer.png?raw=true" width="600px"/>
 
 1. RP2040 MCU, XC6206P332MR Voltage Regulator and a 128Mb W25Q128JVSIQ Flash Chip.
 2. SK6812MINI-E LED with a 74AHCT1G125 Level Shifter, CSTNE12M0GH5C000R0 Murata Resonator.
 2. 4 pin JST-SH for connectivity with the Unified daughterboard.
 3. Edge cuts with cutouts for two sort of centred internal screws.
 4. Top facing SK6812MINI-E LED with a 74AHCT1G125 level shifter.
 5. Ai03's MX_V2 switch footprints were used - so most 5 pin switches are pretty tight.

 ## Acknowledgment
 
 This project uses repositories made available by the Raspberry Pi Foundation and Ai03.
