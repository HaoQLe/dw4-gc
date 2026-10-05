#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_80148B20();
void *fn_8014FD18();
void fn_8014FD54();
void fn_80150038();
void fn_8015108C();
extern char lbl_8049FDD0[];
extern void *lbl_805644B8;
extern void *lbl_805644BC;
void fn_8014FE78();
void *fn_8014FEE0();
}
extern "C" {
void fn_8014FE50(){
 fn_80066188((int)fn_8014FE78);
}
void fn_8014FE78(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805644B8,(int)fn_8015108C,(int)fn_80148B20,(int)fn_8014FEE0,(int)lbl_8049FDD0,44,(int)fn_8014FD54,0,0,0);
}
void *fn_8014FEE0(){return fn_8014FD18();}
void *fn_8014FF00(){
 if(!lbl_805644BC || !(reinterpret_cast<unsigned int *>(lbl_805644BC)[0x24/4]&4)) fn_80150038();
 return lbl_805644BC;
}
}
#pragma pop
