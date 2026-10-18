// Gap::Bec::beSound: its message handler.
#include "beSound.h"

// The original calls every function of these files; none is inlined.
#pragma auto_inline off

extern "C" {

// Answers a "SOUND" message (beSound_Message): playing, stopping and fading sounds, readiness, effects,
// volumes, and the loading of the binary sound data.
bool beSound_virtual90(beSound *self, beBaseInfoRam *ram, void *message)
{
    beBaseInfo *info = ram->_parentInfo;
    switch (fn_80304FD8(self->_messenger, fn_802B8E10(), reinterpret_cast<void **>(message)[5])) {
    case beSound_Message::STOP:
        if (fn_80306BB8(self->_messenger) == 0) return false;
        {
            long long id = fn_80306C54(self->_messenger, 0);
            fn_802F6038(self->_cri, id);
        }
        break;
    case beSound_Message::PLAYatPAUSE:
        self->_cri->_pauseOnetime = true;
    case beSound_Message::PLAY: {
        const char *name = fn_8030709C(self->_messenger, 0);
        int index = fn_80315C94(self, ram, name);
        if (index == -1) return false;
        beSoundData *data = item<beSoundData>(info->_dataList, index);
        switch (data->_type) {
        case 1:
            if (self->_currentBGM && strcmp(nameOf(data), self->_currentBGM) == 0) return true;
            if (fn_802F5828(self->_cri, static_cast<beSoundInfo *>(info)->_fnameList, data) == 0) {
                fn_803065DC(self->_messenger, "SOUND");
                fn_80306FDC(self->_messenger, nameOf(data));
                fn_803061BC(self->_messenger, "PLAY", 0, 11);
                break;
            }
            setString(self->_currentBGM, nameOf(data));
            break;
        case 2:
            if (fn_802F5828(self->_cri, static_cast<beSoundInfo *>(info)->_fnameList, data) == 0) {
                fn_803065DC(self->_messenger, "SOUND");
                fn_80306FDC(self->_messenger, nameOf(data));
                fn_803061BC(self->_messenger, "PLAY", 0, 11);
            }
            break;
        default: {
            long long now = self->_insight->_worldTime;
            for (int i = 0; i < self->_playSEs->_count; i++) {
                bePlaySE *effect = item<bePlaySE>(self->_playSEs, i);
                if (effect->_id == index && now < effect->_time) {
                    fn_80306A40(self->_messenger, 0);
                    fn_80306BC8(self->_messenger, 0);
                    return true;
                }
            }
            long long id = fn_802F5A04(self->_cri, static_cast<beSoundInfo *>(info)->_fnameList, data);
            fn_80306A40(self->_messenger, data->_type);
            fn_80306BC8(self->_messenger, id);
            if (id > 0) {
                Ref<bePlaySE> effect(bePlaySE_create(poolFor(self, lbl_8056225C)), Ref<bePlaySE>::adopt);
                effect->_id = index;
                effect->_time = now + 49999998;
                fn_80069128(self->_playSEs, effect);
            }
            break;
        }
        }
        break;
    }
    case beSound_Message::PAUSEOFF:
    {
        beCri *cri = self->_cri;
        fn_802F61F8(cri, fn_8030709C(self->_messenger, 0));
    }
        break;
    case beSound_Message::VOLUMECTL: {
        const char *direction = fn_8030709C(self->_messenger, 0);
        if (fn_80306BB8(self->_messenger) > 0) {
            if (strcmp(direction, "UP") == 0) {
                beCri *cri = self->_cri;
                fn_802F64F0(cri, fn_80306C54(self->_messenger, 0), 0.0f, 1.0f, 10.0f);
            } else if (strcmp(direction, "DOWN") == 0) {
                beCri *cri = self->_cri;
                fn_802F64F0(cri, fn_80306C54(self->_messenger, 0), 1.0f, 0.0f, 10.0f);
            }
            break;
        }
        if (fn_80306FCC(self->_messenger) > 1) {
            const char *name = fn_8030709C(self->_messenger, 1);
            if (strcmp(direction, "UP") == 0) fn_802F6334(self->_cri, name, 0.0f, 1.0f, 10.0f);
            else if (strcmp(direction, "DOWN") == 0) fn_802F6334(self->_cri, name, 1.0f, 0.0f, 10.0f);
            if (self->_currentBGM && strcmp(name, self->_currentBGM) == 0) setString(self->_currentBGM, 0);
        }
        break;
    }
    case beSound_Message::VOLUMECTL2: {
        if (fn_80306FCC(self->_messenger) < 1) return false;
        if (fn_80306B18(self->_messenger) < 3) return false;
        const char *name = fn_8030709C(self->_messenger, 0);
        float from = fn_80306BA0(self->_messenger, 0);
        float to = fn_80306BA0(self->_messenger, 1);
        float time = fn_80306BA0(self->_messenger, 2);
        absolute(from - to);   // the fade's extent, not used
        fn_802F6334(self->_cri, name, from, to, time);
        break;
    }
    case beSound_Message::BGMSTOP:
        fn_802F60FC(self->_cri, 1);
        setString(self->_currentBGM, 0);
        break;
    case beSound_Message::ENVSTOP:
        fn_802F60FC(self->_cri, 2);
        break;
    case beSound_Message::SESTOP:
        fn_802F60FC(self->_cri, 4);
        break;
    case beSound_Message::FXCTL:
    {
        const char *name = fn_8030709C(self->_messenger, 0);
        fn_802F6F10(self->_cri, name);
    }
        break;
    case beSound_Message::GETWORDLIST: {
        beBaseInfoDataList *list = info->_dataList;
        int count = list->_count;
        for (int i = 0; i < count; i++) fn_80306FDC(self->_messenger, nameOf(item<igNamedObject>(list, i)));
        break;
    }
    case beSound_Message::ISREADY:
    case beSound_Message::ISALLREADY:
    {
        bool ready = fn_802F6FB0(self->_cri, fn_80306FCC(self->_messenger) < 1 ? "ALL" : fn_8030709C(self->_messenger, 0));
        fn_80306964(self->_messenger, ready);
    }
        break;
    case beSound_Message::ISBGMREADY:
    {
        bool ready = fn_802F6FB0(self->_cri, nameOf(self->_cri->_hdBGM));
        fn_80306964(self->_messenger, ready);
    }
        break;
    case beSound_Message::ISENVREADY:
    {
        bool ready = fn_802F6FB0(self->_cri, nameOf(self->_cri->_hdENV));
        fn_80306964(self->_messenger, ready);
    }
        break;
    case beSound_Message::SNDFVOLUME:
    {
        int volume = fn_80306B00(self->_messenger, 0);
        fn_802F7244(self->_cri, volume);
    }
        break;
    case beSound_Message::ONFREEZE:
        fn_802F68D0(self->_cri, false);
        break;
    case beSound_Message::OFFREEZE:
        fn_802F68D0(self->_cri, true);
        break;
    case beSound_Message::MAKEBINLIST: {
        // The binary objects of the sound files of this info that are not loaded yet, by file name.
        if (!static_cast<beSoundInfo *>(info)->_dataType) return false;
        fn_80305F58(self->_messenger, "STATICINFO", "GETINFOLIST");
        if (fn_80306E1C(self->_messenger) < 1) return false;
        igObjectList *infos = fn_80306FB4(self->_messenger, 0);
        {
        igNamedObjectList *files = static_cast<beSoundInfo *>(info)->_fnameList;
        Ref<igStringRefList> names(igStringRefList_create(poolFor(self, lbl_8056225C)), Ref<igStringRefList>::adopt);
        Ref<igStringObj> text(self->_system->_globalStrObj);
        igStringObj *string = text;
        for (int i = 0; i < files->_count; i++) {
            fn_80071F9C(text, nameOf(item<igNamedObject>(files, i)));
            fn_8007249C(text);
            fn_80072840(text, 0, 1);
            const char *type = static_cast<beSoundInfo *>(info)->_dataType;
            if (strcmp(type, textOf(string)) != 0) continue;
            fn_80071F9C(text, nameOf(item<igNamedObject>(files, i)));
            fn_80072608(text);
            fn_80072164(text);
            bool found = false;
            const char *base = textOf(text);
            igStringRef name(base ? pooledString(base) : 0);
            for (int j = 0; j < names->_count; j++) {
                bool same = strcmp(name.getString(), fn_800218F4(names, j).getString()) == 0;
                if (same) {
                    found = true;
                    break;
                }
            }
            if (!found) fn_8002080C(names, name);
        }
        for (int i = 0; i < names->_count; i++) {
            const char *name = fn_800218F4(names, i).getString();
            bool found = false;
            for (int j = 0; j < infos->_count; j++) {
                beBaseInfoDataList *datas = item<beBaseInfo>(infos, j)->_dataList;
                for (int k = 0; k < datas->_count; k++) {
                    igNamedObject *data = item<igNamedObject>(datas, k);
                    if (strcmp(nameOf(data), name) == 0) {
                        fn_80069128(self->_cri->_lsBinObjs, data);
                        found = true;
                        break;
                    }
                }
                if (found) break;
            }
        }
        }
        fn_802F6AA8(self->_cri);
        break;
    }
    case beSound_Message::ISDONETRANS:
    {
        bool done = fn_802F6DF8(self->_cri);
        fn_80306964(self->_messenger, done);
    }
        break;
    case beSound_Message::FREESFPDATA:
        if (self->_cri->_dataType == 1) fn_802F6BAC(self->_cri, true);
        break;
    default:
        return false;
    }
    return true;
}

}
