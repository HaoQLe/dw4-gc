#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_800237D0();
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_80066B08();
void fn_801AA6DC();
void *fn_801C3A54();
void fn_801C3A90();
void fn_801C3BD8();
extern char lbl_804B044C[];
extern char lbl_804B0458[];
extern void *lbl_805650B0;
void fn_801C3B40();
void *fn_801C3BB8();
}
extern "C" {
void fn_801C3B18(){
 fn_80066188((int)fn_801C3B40);
}
void fn_801C3B40(){
 fn_801AA6DC();
 fn_80066204(0,(int)&lbl_805650B0,(int)fn_80066B08,(int)fn_800237D0,(int)fn_801C3BB8,(int)lbl_804B0458,16,(int)fn_801C3A90,(int)fn_801C3BD8,0,(int)lbl_804B044C);
}
void *fn_801C3BB8(){return fn_801C3A54();}
}
#pragma pop
