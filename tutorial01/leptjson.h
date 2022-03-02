#ifndef LEPTJSON_H__
#define LEPTJSON_H__

typedef enum { LEPT_NULL, LEPT_FALSE, LEPT_TRUE, LEPT_NUMBER, LEPT_STRING, LEPT_ARRAY, LEPT_OBJECT } lept_type;

typedef struct {
    lept_type type;
}lept_value;

enum {
    LEPT_PARSE_OK = 0,
    LEPT_PARSE_EXPECT_VALUE, /*json只含有空白*/
    LEPT_PARSE_INVALID_VALUE, 
    LEPT_PARSE_ROOT_NOT_SINGULAR /*json在一个值和空白之后还有其他字符*/
};

int lept_parse(lept_value* v, const char* json);

lept_type lept_get_type(const lept_value* v);

#endif /* LEPTJSON_H__ */
