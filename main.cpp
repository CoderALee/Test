#include <cstdio>
#include <string>
#include <set>
#include <functional>
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
	//printf("hello world\n");

    std::function<bool(const std::pair<int, float>&, const std::pair<int, float>&) cmp=
        [](const std::pair<int,float>& p1, const std::pair<int, float>& p2)->bool{
            return p1.first > pt2.first && p1.second > pt2.second;
        }
    std::set<std::pair<int,float>, decltype(cmp)> tb(cmp);
    tb.insert(std::make_pair(1, 3.0f));
	return 0;
}
