Name:     xorg-x11-proto-hwc
Summary:  X.Org X11 Protocol hwcproto
Version:  0.1.0
Release:  1
VCS:      framework/uifw/xorg/proto/x11proto-hwc#38ccb3606c2fbe64572793fd1be0aa7ab38f75aa
Group:    Development/System
License:  MIT
URL:      http://www.x.org
Source0:  %{name}-%{version}.tar.gz
Provides: hwcproto

BuildRoot:  %{_tmppath}/%{name}-%{version}-build

BuildRequires: pkgconfig
BuildRequires:  pkgconfig(xorg-macros)

%description
Description: %{summary}
This package provides development headers describing the wire protocol
for the H/W Composite extension.

More information about X.Org can be found at:
<URL:http://www.X.org>
<URL:http://xorg.freedesktop.org>
<URL:http://lists.freedesktop.org/mailman/listinfo/xorg>

This package is built from the X.org hwcproto proto module.

%prep
%setup -q

%build

./autogen.sh
%reconfigure --disable-static \
             --libdir=%{_datadir} \
             --without-xmlto

# Call make instruction with smp support
make %{?jobs:-j%jobs}

%install
rm -rf %{buildroot}
mkdir -p %{buildroot}/usr/share/license
cp -af COPYING %{buildroot}/usr/share/license/%{name}
%make_install

%remove_docs

%clean
rm -rf %{buildroot}

%files
%defattr(-,root,root,-)
/usr/share/license/%{name}
%{_includedir}/X11/extensions/*.h
%{_datadir}/pkgconfig/*.pc
