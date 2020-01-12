
#ifndef __FFMPEG_COMMON_H__
#define __FFMPEG_COMMON_H__

#ifdef __cplusplus
extern "C" {
#endif

#include "libavformat/avformat.h"
#include "SDL.h"


/****
 *
 * @param fmt_ctx
 * @param type
 * @param codec_ctx in-out
 * @param codec in-out
 * @param stream in-out
 * @param stream_index in-out
 * @return return 0 if success else < 0;
 */
__declspec(dllexport) int
open_codec(AVFormatContext *fmt_ctx, enum AVMediaType type,
           AVCodecContext **codec_ctx, AVCodec **codec,
           AVStream **stream, int *stream_index);


#ifdef __cplusplus
}
#endif

#endif