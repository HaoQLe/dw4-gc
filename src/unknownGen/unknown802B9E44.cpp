#include <unknownGen.h>
#pragma push
#pragma auto_inline off
extern "C" {
void fn_80066188(int);
void fn_80066204(int,int,int,int,int,int,int,int,int,int,int);
void fn_802B1AC8();
void *fn_802B381C();
void *fn_802B9CA0();
void fn_802B9CEC();
void fn_802B9F08();
void fn_802E3908();
extern char lbl_8041D8C4[];
extern char lbl_804CF6A0[];
extern char lbl_805347A8[];
void fn_802B9E6C();
void *fn_802B9EE8();
}
extern "C" {
void fn_802B9E44(){
 fn_80066188((int)fn_802B9E6C);
}
void fn_802B9E6C(){
 fn_802B1AC8();
 fn_80066204(0,(int)lbl_805347A8,(int)fn_802E3908,(int)fn_802B381C,(int)fn_802B9EE8,(int)lbl_8041D8C4,48,(int)fn_802B9CEC,(int)fn_802B9F08,0,(int)lbl_804CF6A0);
}
void *fn_802B9EE8(){return fn_802B9CA0();}
}
#pragma pop
