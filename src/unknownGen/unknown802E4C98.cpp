#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802E4B54();
void fn_802E4BA0();
void fn_802E4EF8();
void fn_802E510C();
extern char lbl_80420E68[];
extern char lbl_804D2E9C[];
extern char lbl_804D2EA0[];
extern char lbl_804D2EA4[];
extern char lbl_804D2EA8[];
extern void *lbl_8053573C;
extern void *lbl_80535744;
extern void *lbl_80535748;
extern void *lbl_805621F4;
void fn_802E4CC0();
void *fn_802E4D34();
void *fn_802E4D54();
void fn_802E4D64();
}
extern "C" {
void fn_802E4C98(){
 fn_80066188((int)fn_802E4CC0);
}
void fn_802E4CC0(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_8053573C,(int)fn_802E510C,(int)fn_802E4D54,(int)fn_802E4D34,(int)lbl_80420E68,48,(int)fn_802E4BA0,(int)fn_802E4D64,0,0);
}
void *fn_802E4D34(){return fn_802E4B54();}
void *fn_802E4D54(){return lbl_80535748;}
void fn_802E4D64(){
 void *meta=lbl_8053573C;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D2E9C,0x1);
 fn_800659C0(meta,lbl_804D2EA0,lbl_804D2EA4,lbl_804D2EA8,field);
}
void *fn_802E4DE4(){
 if(!lbl_80535744) lbl_80535744=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80535744;
}
void *fn_802E4E38(){
 if(!lbl_80535744 || !(reinterpret_cast<unsigned int *>(lbl_80535744)[0x24/4]&4)) fn_802E4EF8();
 return lbl_80535744;
}
}
#pragma pop
