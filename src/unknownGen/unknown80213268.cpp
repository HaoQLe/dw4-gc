#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_801E626C();
void *fn_803B5B70(void *);
}
class UnknownGenV80213268_1 {
public:
 virtual void s08();
 virtual void s0C();
 virtual void s10();
 virtual void s14();
 virtual void s18();
 virtual void s1C();
};
extern "C" {
void fn_80213268(int p0){
 void *value0=fn_803B5B70(*reinterpret_cast<void **>(reinterpret_cast<char *>((void *)p0)+32));
 reinterpret_cast<UnknownGenV80213268_1 *>(value0)->s1C();
}
void *fn_8021329C(){return fn_801E626C();}
}
#pragma pop
