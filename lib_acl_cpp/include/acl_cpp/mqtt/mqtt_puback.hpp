#pragma once

#include "mqtt_message.hpp"

namespace acl {

class mqtt_puback : public mqtt_message {
public:
	mqtt_puback(void);
	~mqtt_puback(void);

	void set_pkt_id(unsigned short id);
	unsigned short get_pkt_id(void) const {
		return pkt_id_;
	}

	bool to_string(string& out);

	int update(const char* data, unsigned dlen);

public:
	int unpack_header_var(const char* data, unsigned dlen);

private:
	bool finished_;
	char hbuf_[2];
	unsigned hlen_;

	unsigned short pkt_id_;
};

} // namespace acl
