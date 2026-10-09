#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *bePlaySE_getMeta();
void bePlaySE_vtableRead();
void *fn_800237D0();
void *fn_80029E64(void *);
void *fn_800607F4(void *);
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802B9780();
void igObject_register();
extern char lbl_8041D860[];
extern char lbl_804CF63C[];
extern char lbl_804CF644[];
extern char lbl_804CF64C[];
extern char lbl_804CF654[];
extern void *lbl_80534788;
extern void *lbl_80534794;
extern void *lbl_805621F4;
void bePlaySE_register();
void *bePlaySE_getMetaCall();
void bePlaySE_fieldInit();
}
extern "C" {
void fn_802B9530(){
 fn_80066188((int)bePlaySE_register);
}
void bePlaySE_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_80534788,(int)igObject_register,(int)fn_800237D0,(int)bePlaySE_getMetaCall,(int)lbl_8041D860,24,(int)bePlaySE_vtableRead,(int)bePlaySE_fieldInit,0,0);
}
void *bePlaySE_getMetaCall(){return bePlaySE_getMeta();}
void bePlaySE_fieldInit(){
 void *meta=lbl_80534788;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804CF63C,0x2);
 fn_800659C0(meta,lbl_804CF644,lbl_804CF64C,lbl_804CF654,field);
}
void *fn_802B966C(){
 if(!lbl_80534794) lbl_80534794=fn_80029E64(fn_800607F4(lbl_805621F4));
 return lbl_80534794;
}
void *beShadow01InfoList_getMeta(){
 if(!lbl_80534794 || !(reinterpret_cast<unsigned int *>(lbl_80534794)[0x24/4]&4)) fn_802B9780();
 return lbl_80534794;
}
}
#pragma pop
