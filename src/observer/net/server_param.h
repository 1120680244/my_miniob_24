/* Copyright (c) 2021 Xie Meiyi(xiemeiyi@hust.edu.cn) and OceanBase and/or its affiliates. All rights reserved.
miniob is licensed under Mulan PSL v2.
You can use this software according to the terms and conditions of the Mulan PSL v2.
You may obtain a copy of Mulan PSL v2 at:
         http://license.coscl.org.cn/MulanPSL2
THIS SOFTWARE IS PROVIDED ON AN "AS IS" BASIS, WITHOUT WARRANTIES OF ANY KIND,
EITHER EXPRESS OR IMPLIED, INCLUDING BUT NOT LIMITED TO NON-INFRINGEMENT,
MERCHANTABILITY OR FIT FOR A PARTICULAR PURPOSE.
See the Mulan PSL v2 for more details. */

//
// Created by Longda on 2021/4/13.
//

/**** net模块 —— 主要用于：client接受命令，监听client；进而，处理命令；处理完后，再返回给client.
      当中需要client和server互相通信。                                                        */
#ifndef __SRC_OBSERVER_NET_SERVER_PARAM_H__
#define __SRC_OBSERVER_NET_SERVER_PARAM_H__

#include <string>

class ServerParam {
public:
  ServerParam();

  ServerParam(const ServerParam &other) = default;
  ~ServerParam() = default;

public:
  long listen_addr;//accpet client's address, default is INADDR_ANY, means accept every address

  int max_connection_num;
  
  int port; // server listing port

  std::string unix_socket_path;
  
  bool use_unix_socket = false;// 如使用标准输入输出作为通信条件，就不再监听端口
};

#endif  //__SRC_OBSERVER_NET_SERVER_PARAM_H__
