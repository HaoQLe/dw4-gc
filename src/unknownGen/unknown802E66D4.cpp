#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void *beAction2FADESET_getMeta();
void beAction2FADESET_vtableRead();
void *fn_80023CF4();
void fn_80065924(void *,void *,int);
void fn_800659C0(void *,void *,void *,void *,void *);
void *fn_80065D88(void *);
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void fn_802E6940();
void igNamedObject_register();
extern char lbl_80421054[];
extern char lbl_804D3118[];
extern char lbl_804D3120[];
extern char lbl_804D3128[];
extern char lbl_804D3130[];
extern void *lbl_805357F0;
extern void *lbl_805357FC;
void beAction2FADESET_register();
void *beAction2FADESET_getMetaCall();
void beAction2FADESET_fieldInit();
}
extern "C" {
void fn_802E66D4(){
 fn_80066188((int)beAction2FADESET_register);
}
void beAction2FADESET_register(){
 fn_802B1AC8();
 fn_80066204(0,(int)&lbl_805357F0,(int)igNamedObject_register,(int)fn_80023CF4,(int)beAction2FADESET_getMetaCall,(int)lbl_80421054,20,(int)beAction2FADESET_vtableRead,(int)beAction2FADESET_fieldInit,0,0);
}
void *beAction2FADESET_getMetaCall(){return beAction2FADESET_getMeta();}
void beAction2FADESET_fieldInit(){
 void *meta=lbl_805357F0;
 void *field=fn_80065D88(meta);
 fn_80065924(meta,lbl_804D3118,0x2);
 fn_800659C0(meta,lbl_804D3120,lbl_804D3128,lbl_804D3130,field);
}
void *beAction2JOINTSET_getMeta(){
 if(!lbl_805357FC || !(reinterpret_cast<unsigned int *>(lbl_805357FC)[0x24/4]&4)) fn_802E6940();
 return lbl_805357FC;
}
}
#pragma pop
