#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_80148B20();
void *fn_8014FB30();
void fn_8014FB6C();
void fn_8014FE50();
void fn_8015108C();
extern char lbl_8049FDA4[];
extern void *lbl_805644B4;
extern void *lbl_805644B8;
void fn_8014FC90();
void *fn_8014FCF8();
}
extern "C" {
void fn_8014FC68(){
 fn_80066188((int)fn_8014FC90);
}
void fn_8014FC90(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805644B4,(int)fn_8015108C,(int)fn_80148B20,(int)fn_8014FCF8,(int)lbl_8049FDA4,44,(int)fn_8014FB6C,0,0,0);
}
void *fn_8014FCF8(){return fn_8014FB30();}
void *fn_8014FD18(){
 if(!lbl_805644B8 || !(reinterpret_cast<unsigned int *>(lbl_805644B8)[0x24/4]&4)) fn_8014FE50();
 return lbl_805644B8;
}
}
#pragma pop
