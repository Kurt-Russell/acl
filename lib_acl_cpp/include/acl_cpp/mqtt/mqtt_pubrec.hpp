#pragma once

#include "mqtt_ack.hpp"

namespace acl {

class mqtt_pubrec : public mqtt_ack {
public:
	mqtt_pubrec(void);
	~mqtt_pubrec(void);
};

} // namespace acl