#include "ctrl/VideoFormat.h"

namespace ctrl
{

VideoCodec::VideoCodec()
    : name()
    , label()
    , icodec()
    , command()
    , lossless()
    , transparent()
    , colorspace()
{
}

VideoFormat::VideoFormat()
    : name()
    , label()
    , icodec()
    , command()
    , codecs()
{
}

} // namespace ctrl
