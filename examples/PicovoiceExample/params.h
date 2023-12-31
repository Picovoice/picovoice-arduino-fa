
/*
    Copyright 2020-2023 Picovoice Inc.

    You may not use this file except in compliance with the license. A copy of the license is located in the "LICENSE"
    file accompanying this source.

    Unless required by applicable law or agreed to in writing, software distributed under the License is distributed on
    an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied. See the License for the
    specific language governing permissions and limitations under the License.
*/

#ifndef PARAMS_H
#define PARAMS_H

#include <stdint.h>

    // keyword = سلام رایانه
static const uint8_t KEYWORD_ARRAY[] = {
        0x6f, 0xd7, 0xa8, 0x0e, 0xf6, 0x77, 0xa5, 0xad, 0x85, 0x65, 0x72, 0x70, 0x82, 0x78, 0xea, 0x30, 0xca, 0x4b,
        0x90, 0x4a, 0x2e, 0x55, 0x86, 0xfd, 0x18, 0x97, 0xb6, 0xc9, 0x87, 0x12, 0xd5, 0xa8, 0xe9, 0x82, 0x56, 0x33,
        0x99, 0x11, 0xb5, 0xad, 0x9b, 0x00, 0xe7, 0xcb, 0xde, 0x9b, 0x42, 0x56, 0xa6, 0xb1, 0x84, 0xe1, 0x39, 0x2a,
        0x75, 0x23, 0x0a, 0x1e, 0xcb, 0xc6, 0xea, 0x20, 0xe1, 0x18, 0x29, 0x62, 0x78, 0x22, 0x32, 0x0f, 0xd8, 0x4b,
        0x0f, 0xd5, 0x41, 0x0d, 0x88, 0x29, 0x51, 0x8a, 0xa0, 0xee, 0x20, 0x0c, 0xbe, 0x37, 0x02, 0x27, 0x79, 0xd6,
        0x26, 0xfb, 0xb0, 0x9c, 0x07, 0xea, 0xd1, 0x7f, 0x7e, 0x7b, 0xec, 0xf8, 0x54, 0xbd, 0x04, 0xd1, 0xea, 0xeb,
        0xe1, 0x87, 0x36, 0x35, 0xdd, 0x4e, 0x03, 0x1a, 0xd9, 0xd8, 0x86, 0xa0, 0x8e, 0x77, 0x38, 0xf4, 0xe7, 0x12,
        0x96, 0x7b, 0xca, 0x00, 0xab, 0xa8, 0xd3, 0x5c, 0x77, 0x71, 0x22, 0x4b, 0x1c, 0x71, 0x48, 0xa3, 0x34, 0x93,
        0x9d, 0x2a, 0xb7, 0x54, 0x91, 0xb1, 0x7c, 0x07, 0x49, 0x72, 0x57, 0xa7, 0x62, 0x8a, 0x40, 0x31, 0x48, 0x24,
        0x1e, 0x96, 0xb6, 0xe0, 0x94, 0x84, 0xb0, 0xdd, 0x2d, 0x00, 0x1c, 0x72, 0x15, 0x11, 0x2b, 0x01, 0x74, 0x2f,
        0xaa, 0x7c, 0x89, 0x65, 0x71, 0x0b, 0x66, 0x41, 0xae, 0xae, 0x40, 0x5d, 0x77, 0xbc, 0xc0, 0x04, 0x65, 0xaa,
        0x05, 0xe2, 0x71, 0x2f, 0xf8, 0x0b, 0xef, 0xa1, 0x62, 0x2b, 0x88, 0x88, 0x52, 0x5c, 0xdf, 0x9a, 0x62, 0x9a,
        0x72, 0x01, 0x87, 0x59, 0xb1, 0x9a, 0xa2, 0x53, 0xa6, 0x98, 0x9a, 0x2d, 0xa6, 0x9b, 0x81, 0x1b, 0x3e, 0x51,
        0x6a, 0xd5, 0xf5, 0xb0, 0x07, 0xc2, 0xe6, 0x6f, 0x4d, 0x9e, 0xb5, 0x68, 0xad, 0x11, 0x94, 0xf0, 0x04, 0xec,
        0x9c, 0x18, 0x5f, 0x9c, 0xe9, 0xdf, 0x67, 0xdb, 0xc2, 0x9a, 0xfe, 0x2d, 0xd9, 0xf1, 0xea, 0xaa, 0x88, 0x39,
        0xfa, 0xc4, 0x1f, 0x8c, 0xd6, 0x3a, 0x50, 0x53, 0x66, 0x53, 0x10, 0x53, 0xea, 0x3f, 0x69, 0x8e, 0x53, 0x3f,
        0x8a, 0xa4, 0x4a, 0x20, 0x68, 0x22, 0xe1, 0x6f, 0x7f, 0x3e, 0xb9, 0xb0, 0x52, 0xa8, 0xdf, 0xa2, 0x97, 0x8e,
        0x53, 0x32, 0x75, 0x13, 0x05, 0x6b, 0x8f, 0xdc, 0xb3, 0xc5, 0x66, 0xb6, 0xab, 0xd9, 0x47, 0xd1, 0xab, 0x35,
        0x12, 0x8a, 0xd8, 0x3b, 0xf2, 0x68, 0xb1, 0xbe, 0x0d, 0xe8, 0xa6, 0x43, 0x48, 0xaf, 0x0c, 0xcc, 0x89, 0x06,
        0x37, 0xbe, 0x33, 0xb3, 0x4a, 0xf2, 0x44, 0x52, 0xa2, 0x7b, 0x4e, 0x31, 0xc1, 0x09, 0xc6, 0x36, 0x80, 0x1b,
        0xa1, 0x1f, 0x2c, 0x5d, 0x2d, 0x7e, 0xbd, 0xff, 0xf9, 0xf8, 0x55, 0xbd, 0x6b, 0x21, 0x5c, 0x60, 0xc1, 0xa0,
        0x35, 0x66, 0x88, 0x4b, 0x98, 0xc8, 0x8a, 0x0f, 0xfe, 0x01, 0x8b, 0xa9, 0x9a, 0x93, 0x9d, 0xa5, 0x24, 0xb7,
        0x71, 0xd4, 0x71, 0x6b, 0x9a, 0x08, 0x4e, 0x5f, 0x57, 0x1c, 0x1b, 0x86, 0xdf, 0xb5, 0x24, 0x77, 0xa2, 0x6c,
        0x39, 0x70, 0xcb, 0x80, 0xf6, 0x6d, 0xaa, 0xb3, 0x0f, 0x79, 0xa9, 0x46, 0x89, 0x98, 0xcd, 0x35, 0xee, 0x68,
        0xd8, 0x8a, 0x3a, 0x90, 0x0a, 0x3c, 0xfd, 0x23, 0xd6, 0xa5, 0x36, 0xcb, 0x23, 0x32, 0xee, 0x43, 0x12, 0xb8,
        0x81, 0x4d, 0x98, 0x3d, 0xb1, 0x04, 0x3d, 0x27, 0xa1, 0x95, 0x4a, 0x96, 0x51, 0xee, 0x33, 0xa4, 0x7f, 0x02,
        0xbf, 0x86, 0x21, 0xd2, 0x4a, 0xb6, 0x4d, 0xf1, 0x14, 0x90, 0x6e, 0xfb, 0xfb, 0xb1, 0x4e, 0x71, 0xe9, 0x03,
        0x9c, 0x4b, 0xa8, 0xb2, 0xe9, 0x22, 0x18, 0xd8, 0x77, 0xdb, 0x6a, 0xfe, 0x27, 0x8a, 0x1c, 0x6d, 0x07, 0x86,
        0x56, 0xc0, 0x96, 0x93, 0x43, 0x9b, 0xe6, 0x23, 0xa5, 0xfa, 0x8b, 0x44, 0xcd, 0x5d, 0x13, 0x5b, 0xb9, 0xd9,
        0x12, 0x0c, 0xa5, 0x0f, 0xa4, 0x53, 0x19, 0xcb, 0xda, 0x32, 0x8e, 0x66, 0x2f, 0x3f, 0x5e, 0x9d, 0x9a, 0x0c,
        0x9b, 0x01, 0x9e, 0xc7, 0x7f, 0x63, 0x17, 0xdc, 0x4c, 0x98, 0x16, 0xdd, 0x6a, 0x10, 0x17, 0xe4, 0x07, 0x54,
        0xc7, 0xaf, 0xe1, 0x17, 0xc8, 0x54, 0xa8, 0xa1, 0x69, 0x4b, 0xca, 0xc9, 0x07, 0x7a, 0x8a, 0xcf, 0xb6, 0x37,
        0xd2, 0xe2, 0xda, 0x64, 0x6e, 0xb0, 0xb6, 0xaa, 0xc7, 0xb6, 0x68, 0x84, 0xdc, 0xd6, 0x44, 0x8b, 0x21, 0xde,
        0x73, 0x19, 0x3f, 0x4a, 0x64, 0x2a, 0x47, 0x1b, 0x3c, 0x10, 0x20, 0x16, 0x22, 0xd2, 0xe0, 0x16, 0x91, 0x2b,
        0x51, 0x11, 0x48, 0x47, 0x45, 0x98, 0x70, 0xb4, 0xf3, 0xd4, 0x4f, 0x5c, 0x78, 0x0d, 0x51, 0x51, 0x1e, 0x00,
        0xe1, 0x30, 0xea, 0x8b, 0x09, 0xea, 0xfc, 0xc9, 0x5b, 0x78, 0x34, 0xdb, 0x21, 0x28, 0x91, 0x47, 0xe8, 0x85,
        0x3b, 0xd8, 0x41, 0x7c, 0x75, 0xe9, 0xee, 0xb7, 0x62, 0x43, 0x5a, 0xf1, 0xca, 0x9b, 0x8c, 0x39, 0xff, 0x95,
        0x79, 0x03, 0x31, 0xd9, 0x39, 0x24, 0x93, 0x19, 0x1e, 0xb1, 0x64, 0xa6, 0x41, 0xd7, 0x9b, 0x3c, 0x92, 0xe4,
        0xad, 0x27, 0x50, 0x1d, 0x41, 0xa2, 0x61, 0xe2, 0xb3, 0xa2, 0x13, 0x38, 0x35, 0x53, 0x88, 0xd4, 0x2b, 0x28,
        0x73, 0x0e, 0xf7, 0x7a, 0x63, 0x03, 0xe2, 0xc2, 0xa4, 0xc9, 0x28, 0xea, 0x05, 0x5a, 0x66, 0xca, 0x67, 0x5d,
        0x95, 0xc2, 0x51, 0x27, 0x57, 0xa1, 0xac, 0x31, 0x4e, 0xa8, 0xa9, 0x59, 0xbd, 0x90, 0x96, 0x67, 0x43, 0x5f,
        0xc1, 0x53, 0xd9, 0x09, 0xde, 0x69, 0xc3, 0xf0, 0xba, 0x10, 0x58, 0x1f, 0x11, 0xbb, 0x5f, 0xf4, 0xe7, 0xfb,
        0x57, 0xf3, 0x41, 0x86, 0x5b, 0x85, 0xaf, 0x13, 0x98, 0x3b, 0xee, 0x02, 0x00, 0x06, 0x24, 0xa1, 0x09, 0xda,
        0x1f, 0x08, 0xec, 0xd1, 0x3f, 0x80, 0x86, 0x44, 0x0d, 0x83, 0x8c, 0xf5, 0x9b, 0x1c, 0x54, 0x26, 0x40, 0x8c,
        0xdd, 0xc6, 0x77, 0x2f, 0xcd, 0xfc, 0x1a, 0x70, 0xd2, 0x98, 0x1b, 0x3d, 0x3c, 0x7a, 0x9c, 0x7a, 0xe0, 0x2f,
        0xd3, 0x60, 0xea, 0x28, 0xf9, 0x62, 0x52, 0x25, 0x72, 0x06, 0xc9, 0xd1, 0xa8, 0x1d, 0x62, 0x54, 0xd6, 0xaa,
        0xc6, 0x76, 0x1f, 0x69, 0x0a, 0x82, 0xc1, 0x6e, 0x68, 0xf2, 0xb8, 0x70, 0x95, 0xb8, 0x7c, 0xf6, 0x26, 0xd9,
        0x48, 0x4d, 0x96, 0x6d, 0x3e, 0x59, 0xf9, 0x9b, 0xd6, 0x35
};

// context = simple_context_fa
static const uint8_t CONTEXT_ARRAY[] = {
        0x72, 0x68, 0x69, 0x6e, 0x6f, 0x33, 0x2e, 0x30, 0x2e, 0x30, 0x00, 0x00, 0x00, 0x00, 0x66, 0x61, 0x00, 0x09,
        0x00, 0x00, 0x00, 0x70, 0x69, 0x63, 0x6f, 0x76, 0x6f, 0x69, 0x63, 0x65, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0xff, 0xff, 0x00, 0x00, 0x00, 0x00, 0x60, 0x02, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x00, 0x00, 0x63, 0x6f,
        0x6e, 0x74, 0x65, 0x78, 0x74, 0x3a, 0x0a, 0x20, 0x20, 0x65, 0x78, 0x70, 0x72, 0x65, 0x73, 0x73, 0x69, 0x6f,
        0x6e, 0x73, 0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6d, 0x61, 0x6b, 0x65, 0x5f, 0x63, 0x6f, 0x66, 0x66, 0x65,
        0x65, 0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x22, 0xd9, 0x82, 0xd9, 0x87, 0xd9, 0x88,
        0xd9, 0x87, 0x22, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x6e, 0x61, 0x76, 0x69, 0x67, 0x61, 0x74, 0x69, 0x6f, 0x6e,
        0x3a, 0x20, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x22, 0xd8, 0xa8, 0xd8, 0xb1, 0xd9, 0x88,
        0x20, 0xd8, 0xa8, 0xd9, 0x87, 0x20, 0x24, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x6c, 0x6f,
        0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x22, 0x0a, 0x20, 0x20, 0x73, 0x6c, 0x6f, 0x74, 0x73, 0x3a, 0x0a, 0x20,
        0x20, 0x20, 0x20, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x3a, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20,
        0x20, 0x2d, 0x20, 0x22, 0xd8, 0xa2, 0xd8, 0xb4, 0xd9, 0xbe, 0xd8, 0xb2, 0xd8, 0xae, 0xd8, 0xa7, 0xd9, 0x86,
        0xd9, 0x87, 0x22, 0x0a, 0x20, 0x20, 0x20, 0x20, 0x20, 0x20, 0x2d, 0x20, 0x22, 0xda, 0xa9, 0xd9, 0x84, 0xd8,
        0xa7, 0xd8, 0xb3, 0x20, 0xd8, 0xaf, 0xd8, 0xb1, 0xd8, 0xb3, 0x22, 0x0a, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x11, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x1d, 0x00, 0x00, 0x00, 0x26, 0x00,
        0x00, 0x00, 0x36, 0x00, 0x00, 0x00, 0xd8, 0xa2, 0xd8, 0xb4, 0xd9, 0xbe, 0xd8, 0xb2, 0xd8, 0xae, 0xd8, 0xa7,
        0xd9, 0x86, 0xd9, 0x87, 0x00, 0xd8, 0xa8, 0xd8, 0xb1, 0xd9, 0x88, 0x00, 0xd8, 0xa8, 0xd9, 0x87, 0x00, 0xd9,
        0x82, 0xd9, 0x87, 0xd9, 0x88, 0xd9, 0x87, 0x00, 0xda, 0xa9, 0xd9, 0x84, 0xd8, 0xa7, 0xd8, 0xb3, 0x20, 0xd8,
        0xaf, 0xd8, 0xb1, 0xd8, 0xb3, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00,
        0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00,
        0x09, 0x00, 0x00, 0x00, 0x0d, 0x00, 0x00, 0x00, 0x0f, 0x00, 0x00, 0x00, 0x14, 0x00, 0x00, 0x00, 0x1d, 0x00,
        0x00, 0x00, 0x1d, 0x1f, 0x12, 0x01, 0x1c, 0x1b, 0x1d, 0x10, 0x06, 0x03, 0x11, 0x14, 0x11, 0x03, 0x07, 0x13,
        0x01, 0x09, 0x1a, 0x07, 0x0d, 0x06, 0x0e, 0x1d, 0x15, 0x04, 0x01, 0x14, 0x15, 0x00, 0x00, 0x00, 0x04, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00, 0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00,
        0x05, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x04, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x02, 0x00,
        0x00, 0x00, 0x03, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00,
        0x0b, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x09, 0x00, 0x00, 0x00, 0x0a, 0x00, 0x00, 0x00, 0x0b, 0x00, 0x00, 0x00,
        0x0c, 0x00, 0x00, 0x00, 0x6c, 0x6f, 0x63, 0x61, 0x74, 0x69, 0x6f, 0x6e, 0x00, 0x00, 0x00, 0x00, 0x02, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x0c, 0x00, 0x00, 0x00, 0x17, 0x00, 0x00, 0x00, 0x6d, 0x61, 0x6b, 0x65,
        0x5f, 0x63, 0x6f, 0x66, 0x66, 0x65, 0x65, 0x00, 0x6e, 0x61, 0x76, 0x69, 0x67, 0x61, 0x74, 0x69, 0x6f, 0x6e,
        0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff, 0xff,
        0x02, 0x00, 0x00, 0x00, 0x18, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x03, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00,
        0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00, 0x28, 0x00, 0x00, 0x00, 0x02, 0x00,
        0x00, 0x00, 0xff, 0xff, 0xff, 0xff, 0x01, 0x00, 0x00, 0x00, 0x50, 0x00, 0x00, 0x00, 0x3c, 0x00, 0x00, 0x00,
        0x00, 0x00, 0x00, 0x00, 0x01, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00, 0x00
};



#endif // PARAMS_H
    