# Infer

[Infer](http://fbinfer.com/) is a static analysis tool for Java,
Objective-C and C, written in [OCaml](https://ocaml.org/).

## Usage

```sh
$ curl -L https://github.com/yongjhih/infer/raw/master/docker/infer > ~/bin/infer && chmod a+x ~/bin/infer
$ infer -- javac Hello.java
```

```sh
$ curl -L https://github.com/yongjhih/infer/raw/master/docker/infer > ~/bin/infer && chmod a+x ~/bin/infer
$ infer -- ./gradlew build
```

## Installation

Read our [Getting
Started](http://fbinfer.com/docs/getting-started.html) page for
details on how to install packaged versions of Infer. To build Infer
from source, see INSTALL.md.


## License

Infer is BSD-licensed. We also provide an additional patent grant.

Note: Enabling Java support may require you to download and install 
components licensed under the GPL.
