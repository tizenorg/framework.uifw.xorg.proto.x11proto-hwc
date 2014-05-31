hwcdir = $(includedir)/X11/extensions
hwc_HEADERS = hwcproto.h \
				hwctokens.h

pkgconfigdir = $(libdir)/pkgconfig
pkgconfig_DATA = hwcproto.pc

dist_doc_DATA = hwcproto.txt

MAINTAINERCLEANFILES = ChangeLog INSTALL

.PHONY: ChangeLog INSTALL

INSTALL:
	$(INSTALL_CMD)

ChangeLog:
	$(CHANGELOG_CMD)

dist-hook: ChangeLog INSTALL
