#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_80148B20();
void *fn_801506A0();
void fn_801506DC();
void fn_801509C0();
void fn_8015108C();
extern char lbl_8049FE64[];
extern void *lbl_805644CC;
extern void *lbl_805644D0;
void fn_80150800();
void *fn_80150868();
}
extern "C" {
void fn_801507D8(){
 fn_80066188((int)fn_80150800);
}
void fn_80150800(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805644CC,(int)fn_8015108C,(int)fn_80148B20,(int)fn_80150868,(int)lbl_8049FE64,44,(int)fn_801506DC,0,0,0);
}
void *fn_80150868(){return fn_801506A0();}
void *fn_80150888(){
 if(!lbl_805644D0 || !(reinterpret_cast<unsigned int *>(lbl_805644D0)[0x24/4]&4)) fn_801509C0();
 return lbl_805644D0;
}
}
#pragma pop
