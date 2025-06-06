#pragma once

#include "srtc/byte_buffer.h"
#include "srtc/packetizer.h"

namespace srtc {

class PacketizerOpus final : public Packetizer {
public:
    PacketizerOpus(const std::shared_ptr<Track>& track);
    ~PacketizerOpus() override;

    std::list<std::shared_ptr<RtpPacket>> generate(const RtpExtension& extension,
                                                   bool addExtensionToAllPackets,
                                                   const ByteBuffer& frame) override;
};

}
