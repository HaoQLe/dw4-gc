#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_8012FC48();
void *fn_80148B20();
void *fn_801504B8();
void fn_801504F4();
void fn_801507D8();
void fn_8015108C();
extern char lbl_8049FE48[];
extern void *lbl_805644C8;
extern void *lbl_805644CC;
void fn_80150618();
void *fn_80150680();
}
extern "C" {
void fn_801505F0(){
 fn_80066188((int)fn_80150618);
}
void fn_80150618(){
 fn_8012FC48();
 fn_80066204(0,(int)&lbl_805644C8,(int)fn_8015108C,(int)fn_80148B20,(int)fn_80150680,(int)lbl_8049FE48,44,(int)fn_801504F4,0,0,0);
}
void *fn_80150680(){return fn_801504B8();}
void *fn_801506A0(){
 if(!lbl_805644CC || !(reinterpret_cast<unsigned int *>(lbl_805644CC)[0x24/4]&4)) fn_801507D8();
 return lbl_805644CC;
}
}
#pragma pop
