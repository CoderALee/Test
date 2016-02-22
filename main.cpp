#include <cstdio>
#include <string>

int main(int argc, char **argv)
{
    /* this is a comment for cpp code*/
    std::string str("http://hostname:port/index.html");
    auto posBeg = str.find_first_of("://");
    auto posEnd = str.find_first_of(':', posBeg+1);
    
    if (posBeg != std::string::npos &&
        posEnd != std::string::npos) {
        size_t npos = posEnd-posBeg-3;
        std::string substr = str.substr(posBeg+3, npos);
        printf("ip=%s", substr.c_str());
    }
	printf("hello world\n");
	return 0;
}

