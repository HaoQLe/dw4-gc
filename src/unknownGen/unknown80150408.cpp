#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_80148B20();
void *fn_801502D0();
void fn_8015030C();
void fn_801505F0();
void fn_8015108C();
extern char lbl_8049FE28[];
extern void *lbl_805644C4;
extern void *lbl_805644C8;
void fn_80150430();
void *fn_80150498();
}
extern "C" {
void fn_80150408(){
 fn_80066188((int)fn_80150430);
}
void fn_80150430(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805644C4,(int)fn_8015108C,(int)fn_80148B20,(int)fn_80150498,(int)lbl_8049FE28,44,(int)fn_8015030C,0,0,0);
}
void *fn_80150498(){return fn_801502D0();}
void *fn_801504B8(){
 if(!lbl_805644C8 || !(reinterpret_cast<unsigned int *>(lbl_805644C8)[0x24/4]&4)) fn_801505F0();
 return lbl_805644C8;
}
}
#pragma pop
