//
// k8s_namespace_handler.h
//

#pragma once

#include "json/json.h"
#include "sinsp_auth.h"
#include "k8s_handler.h"

class sinsp;

class k8s_namespace_handler : public k8s_handler
{
public:
	k8s_namespace_handler(k8s_state_t& state,
		collector_t& collector,
		std::string url,
		const std::string& http_version = "1.0",
		ssl_ptr_t ssl = 0,
		bt_ptr_t bt = 0);

	~k8s_namespace_handler();

private:
	static std::string EVENT_FILTER;
	static std::string STATE_FILTER;

	void handle_component(const Json::Value& json, const msg_data* data = 0);
};
