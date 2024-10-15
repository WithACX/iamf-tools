/*
 * Copyright (c) 2024, Alliance for Open Media. All rights reserved
 *
 * This source code is subject to the terms of the BSD 3-Clause Clear License
 * and the Alliance for Open Media Patent License 1.0. If the BSD 3-Clause Clear
 * License was not distributed with this source code in the LICENSE file, you
 * can obtain it at www.aomedia.org/license/software-license/bsd-3-c-c. If the
 * Alliance for Open Media Patent License 1.0 was not distributed with this
 * source code in the PATENTS file, you can obtain it at
 * www.aomedia.org/license/patent.
 */

#ifndef CLI_CODEC_FLAC_DECODER_STREAM_CALLBACKS_H_
#define CLI_CODEC_FLAC_DECODER_STREAM_CALLBACKS_H_

#include <cstddef>

#include "include/FLAC/ordinals.h"
#include "include/FLAC/stream_decoder.h"

namespace iamf_tools {
/*!\brief Reads an encoded flac frame into the libflac decoder
 *
 * This callback function is used whenever the decoder needs more input data.
 *
 * \param decoder libflac stream decoder
 *        This parameter is not used in this implementation, but is included to
 *        override the libflac signature.
 * \param buffer Output buffer for the encoded frame.
 * \param bytes Maximum size of the buffer; in the case of a successful read,
 *        this will be set to the actual number of bytes read.
 * \param client_data universal pointer, which in this case should point to
 *        FlacDecoder.
 *
 * \return A libflac read status indicating whether the read was successful.
 */
FLAC__StreamDecoderReadStatus LibFlacReadCallback(
    const FLAC__StreamDecoder* decoder, FLAC__byte buffer[], size_t* bytes,
    void* client_data);

}  // namespace iamf_tools

#endif  // CLI_CODEC_FLAC_DECODER_STREAM_CALLBACKS_H_
