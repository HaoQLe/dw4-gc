#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_80148B20();
void *fn_8014F948();
void fn_8014F984();
void fn_8014FC68();
void fn_8015108C();
extern char lbl_8049FD80[];
extern void *lbl_805644B0;
extern void *lbl_805644B4;
void fn_8014FAA8();
void *fn_8014FB10();
}
extern "C" {
void fn_8014FA80(){
 fn_80066188((int)fn_8014FAA8);
}
void fn_8014FAA8(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805644B0,(int)fn_8015108C,(int)fn_80148B20,(int)fn_8014FB10,(int)lbl_8049FD80,44,(int)fn_8014F984,0,0,0);
}
void *fn_8014FB10(){return fn_8014F948();}
void *fn_8014FB30(){
 if(!lbl_805644B4 || !(reinterpret_cast<unsigned int *>(lbl_805644B4)[0x24/4]&4)) fn_8014FC68();
 return lbl_805644B4;
}
}
#pragma pop
