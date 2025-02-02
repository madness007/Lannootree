#include <json-redis-formatter.hpp>

namespace Processing {

  JsonRedisFormatter::JsonRedisFormatter(std::string redis_url) {
    m_redis_client = std::make_unique<sw::redis::Redis>(redis_url);
  } 

  void JsonRedisFormatter::format(std::vector<uint8_t>& cstring, __attribute_maybe_unused__ cv::Mat& frame) {
    json next_frame;
    next_frame["frame"] = cstring;

    m_redis_client->lpush("processed", next_frame.dump());
  } 

}
