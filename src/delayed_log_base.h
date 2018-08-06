// Media Server - Host or proxy live multimedia streams.
// Copyright (c) 2016 Baidu.com, Inc. All Rights Reserved
//
// Licensed under the Apache License, Version 2.0 (the "License");
// you may not use this file except in compliance with the License.
// You may obtain a copy of the License at
//
//     http://www.apache.org/licenses/LICENSE-2.0
//
// Unless required by applicable law or agreed to in writing, software
// distributed under the License is distributed on an "AS IS" BASIS,
// WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
// See the License for the specific language governing permissions and
// limitations under the License.

// Authors: Ge,Jun (jge666@gmail.com)
//          Jiashun Zhu(zhujiashun2010@gmail.com)

#ifndef MEDIA_SERVER_DELAYED_LOG_BASE_H
#define MEDIA_SERVER_DELAYED_LOG_BASE_H

#include "butil/containers/linked_list.h"
#include "bvar/bvar.h"

class DelayedLogBase : public butil::LinkNode<DelayedLogBase> {
public:
    virtual ~DelayedLogBase();

    void submit();
    
    virtual void print_and_destroy() = 0;
};

#endif // MEDIA_SERVER_DELAYED_LOG_BASE_H
