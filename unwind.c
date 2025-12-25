void _Unwind_Resume(void *ex) {
    while(1) {
    }
}

int _Unwind_DeleteException(void *ex) {
    return 0;
}

void *_Unwind_GetGR(void *ex, int index) {
    return 0;
}

void *_Unwind_GetIP(void *ex) {
    return 0;
}

int _Unwind_Backtrace(int (*callback)(void *, void *), void *data) {
    return 0;
}

void _Unwind_SetIP(void *ex, void *ip) {
}

void _Unwind_SetGR(void *ex, int index, void *value) {
}

void *_Unwind_GetRegionStart(void *ex) {
    return 0;
}

void *_Unwind_GetLanguageSpecificData(void *ex) {
    return 0;
}

void *_Unwind_GetTextRelBase(void *ex) {
    return 0;
}

void *_Unwind_GetDataRelBase(void *ex) {
    return 0;
}

int _Unwind_ForcedUnwind(void *ex, int (*stop)(int, int, void *, void *, void *, void *), void *stop_parameter) {
    return 1;
}

void *_Unwind_GetCFA(void *ex) {
    return 0;
}

void *_Unwind_FindEnclosingFunction(void *pc) {
    return 0;
}

void *_Unwind_GetIPInfo(void *ex, int *ip_before_insn) {
    if(ip_before_insn) {
        *ip_before_insn = 0;
    }
    return 0;
}

void _Unwind_Resume_or_Rethrow(void *ex) {
    while(1) {
    }
}

typedef void *_Unwind_Exception;

int _Unwind_RaiseException(_Unwind_Exception *exception) {
    return 1;
}
