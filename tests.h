#ifndef TESTS_H_
#define TESTS_H_

#include "domain.h"
#include "repo.h"
#include "validator.h"
#include "service.h"
#include <assert.h>

class Tests {
	void test_validator();
	void test_constructor_getters();
	void test_copy_constructor();
	void test_setters();
	void test_operators();
	void test_comparison_operators();
	void test_add_repo();
	void test_find_repo();
	void test_update_repo();
	void test_delete_repo();
	void test_get_tentant();
	void test_get_all();
	void test_add_service();
	void test_update_service();
	void test_delete_service();
	void test_find_service();
	void test_sort();
	void test_filter();
	void test_to_string();
	void test_DTO();
	void test_get_DTO();
	void test_notificare();
	void test_add_notificare();
	void test_find_notificare();
	void test_generate_notificare();
	void test_export_notificare();
	void test_empty_notificare();
	void test_add_notificare_srv();
	void test_get_all_notificari();
	void test_generate_notificare_srv();
	void test_export_notificare_srv();
	void test_empty_notificare_srv();
	void test_get_notificare_size();
	void test_raport();

public:
	Tests() {};
	void test_all();
	~Tests() {

	};
};

#endif