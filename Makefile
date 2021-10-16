ifndef PROJECT_BASE
    export PROJECT_BASE=$(shell pwd)
endif

include $(POCO_BASE)/build/rules/global

SYSFLAGS += -DIFX_THREAD -rdynamic

objects = Main RequestHandlerFactory AuthRequestHandler

target         = http_poco
target_version = 1
target_libs    = PocoNet PocoNetSSL PocoCrypto PocoUtil PocoXML PocoFoundation

include $(POCO_BASE)/build/rules/exec

