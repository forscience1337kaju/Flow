/*
 * Author : Matthias Mark
 *
 *
 * Short Desription:
 * This File contains code for the pattern recognition using a Fourier Mellin Transformation
 */

#include <stdint.h>
#include <pattern_recognition.h>
pattern_s mypattern;

/*
 * @return:
 */
pattern_s check_for_pattern(uint8_t *image, uint16_t image_size)
 {
    start_FourierMellinTransformation(*image, image_size);
    return mypattern;
 }




/*
 * fills the mypattern struct with the necessary information using the FMT
 * maybe there are more Parameters necessary (e.g. height (using sonar), Focal Length, some time parameters for error avoidance, etc.
 */

void start_FourierMellinTransformation(uint8_t captured_image, uint16_t image_size){
    //here should be the Code for doing the FMT using the pattern image comparing to the captured_image
    mypattern.rec_qual = 133;
    mypattern.x_pattern_distance = 134;
    mypattern.y_pattern_distance = 135;
}
