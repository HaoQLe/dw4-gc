#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void *fn_802B697C();
void fn_802B69C8();
void fn_802B6BE4();
void fn_802E3908();
extern char lbl_8041D3A8[];
extern char lbl_804CF1E8[];
extern char lbl_80534680[];
void fn_802B6B48();
void *fn_802B6BC4();
}
extern "C" {
void fn_802B6B20(){
 fn_80066188((int)fn_802B6B48);
}
void fn_802B6B48(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_80534680,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802B6BC4,(int)lbl_8041D3A8,40,(int)fn_802B69C8,(int)fn_802B6BE4,0,(int)lbl_804CF1E8);
}
void *fn_802B6BC4(){return fn_802B697C();}
}
#pragma pop
