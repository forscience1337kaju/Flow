/*
 * Author : Matthias Mark
 *
 *
 * Short Desription:
 * This File contains code for the pattern recognition
 */

#ifndef PATTERN_RECOGNITION_H

#define PATTERN_RECOGNITION_H

#include <stdint.h>

//Maybe use a struct here and fill it with the check_for_pattern function
typedef struct{
    uint8_t rec_qual; // 'quality' of the recognition (0 = bad; 250 = very good)
    float x_pattern_distance; //contains the distance to the pattern in x-direction
    float y_pattern_distance; //contains the distance to the pattern in y-direction
} pattern_s;

/* @brief returns a struct with information about the pattern: Distance (x,y) to the pattern, and 'quality' of the recognition (0 = bad; 250 = very good)*/
pattern_s check_for_pattern(uint8_t *image, uint16_t image_size);

void start_FourierMellinTransformation(uint8_t captured_image, uint16_t image_size);

#endif // PATTERN_RECOGNITION_H
