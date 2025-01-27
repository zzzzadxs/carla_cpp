// Copyright 2016 Proyectos y Sistemas de Mantenimiento SL (eProsima).
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

/*!
 * @file HeaderPubSubTypes.h
 * This header file contains the declaration of the serialization functions.
 *
 * This file was generated by the tool fastcdrgen.
 */

#ifndef _FAST_DDS_GENERATED_STD_MSGS_MSG_HEADER_PUBSUBTYPES_H_
#define _FAST_DDS_GENERATED_STD_MSGS_MSG_HEADER_PUBSUBTYPES_H_
// 引入Fast DDS中主题数据类型相关的头文件，提供了基础类和相关定义，用于后续继承等操作
#include <fastdds/dds/topic/TopicDataType.hpp>
// 引入MD5相关的工具头文件，可能用于消息的标识等与MD5相关的操作
#include <fastrtps/utils/md5.h>
// 引入自定义的Header头文件，推测其中定义了Header类型，是本TopicDataType要处理的数据类型
#include "Header.h"
// 检查GEN_API_VER宏定义，如果未定义或者其值不等于1，
// 则报错提示生成的头文件与当前安装的Fast DDS不兼容，需用fastddsgen重新生成
#if !defined(GEN_API_VER) || (GEN_API_VER != 1)
#error \
    Generated Header is not compatible with current installed Fast DDS. Please, regenerate it with fastddsgen.
#endif  // GEN_API_VER

namespace std_msgs
{
    namespace msg
    {
        /*!
          // 这个类代表了由用户在IDL文件中定义的类型Header的TopicDataType
        // 它用于处理在Fast DDS框架下该类型数据在发布订阅过程中的相关操作，属于HEADER分组（可能用于文档组织等用途）
         */
        class HeaderPubSubType : public eprosima::fastdds::dds::TopicDataType
        {
        public:
// 定义类型别名，方便代码中使用，表示该TopicDataType处理的实际数据类型为Header
            typedef Header type;
// 构造函数声明，使用eProsima_user_DllExport可能是用于导出符号，方便在动态链接库等场景使用该类
            eProsima_user_DllExport HeaderPubSubType();
// 析构函数声明，使用override关键字表示重写基类的虚析构函数，用于对象销毁时资源清理等工作
            eProsima_user_DllExport virtual ~HeaderPubSubType() override;
// 序列化函数声明，用于将Header类型的数据（通过data指针传递，实际指向Header类型对象）
            // 转换为可在网络传输或存储的序列化格式，存储到SerializedPayload_t类型的payload结构体中
            eProsima_user_DllExport virtual bool serialize(
                    void* data,
                    eprosima::fastrtps::rtps::SerializedPayload_t* payload) override;
            // 反序列化函数声明，与serialize相反，从给定的序列化数据payload中还原出Header类型的数据
            // 并存储到data所指向的内存空间中
            eProsima_user_DllExport virtual bool deserialize(
                    eprosima::fastrtps::rtps::SerializedPayload_t* payload,
                    void* data) override;
            // 获取序列化大小的函数提供者声明，返回一个可调用对象（std::function），
            // 调用该对象可获取给定Header类型数据序列化后的大小（以uint32_t类型表示），
            // 常用于内存分配等相关操作的预估等情况
            eProsima_user_DllExport virtual std::function<uint32_t()> getSerializedSizeProvider(
                    void* data) override;
            // 获取键值函数声明，用于从Header类型的数据中获取一个唯一标识该数据实例的键值，
            // 存储到InstanceHandle_t类型的ihandle结构体中，可通过force_md5参数控制是否强制使用MD5算法等逻辑生成键值
            eProsima_user_DllExport virtual bool getKey(
                    void* data,
                    eprosima::fastrtps::rtps::InstanceHandle_t* ihandle,
                    bool force_md5 = false) override;
            // 数据创建函数声明，用于创建Header类型的数据的内存空间（返回指向该内存空间的指针  
            eProsima_user_DllExport virtual void* createData() override;
            // 数据删除函数声明，用于释放之前通过createData或其他方式分配的Header类型数据所占用的内存空间
            eProsima_user_DllExport virtual void deleteData(
                    void* data) override;
 // 如果TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED这个宏定义存在（可能表示相关API支持判断是否有界的功能）
        #ifdef TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED
// 重写判断是否有界的函数，这里返回false，表示该数据类型不是有界的（具体含义依Fast DDS框架中此概念定义为准）
            eProsima_user_DllExport inline bool is_bounded() const override
            {
                return false;
            }

        #endif  // TOPIC_DATA_TYPE_API_HAS_IS_BOUNDED
 // 如果TOPIC_DATA_TYPE_API_HAS_IS_PLAIN这个宏定义存在（可能表示相关API支持判断是否为普通类型的功能）
        #ifdef TOPIC_DATA_TYPE_AP // 如果TOPIC_DATA_TYPE_API_HAS_IS_PLAIN）I_HAS_IS_PLAIN
 // 重写判断是否为普通类型的函数，这里返回false，表示该数据类型不是普通类型（具体含义依Fast DDS框架中此概念定义为准）
            eProsima_user_DllExport inline bool is_plain() const override
            {
                return false;
            }
 // 如果TOPIC_DATA_TYPE_API_HAS_IS_PLAIN这个宏定义存在（可能表示相关API支持判断是否为普通类型的功能）
        #endif  // TOPIC_DATA_TYPE_API_HAS_IS_PLAIN
// 如果TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE这个宏定义存在（可能表示相关API支持构造样本的功能）
        #ifdef TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
   // 重写构造样本的函数，这里直接返回false，可能表示不支持或未实现该数据类型的样本构造功能（具体依框架定义和需求判断）
            eProsima_user_DllExport inline bool construct_sample(
                    void* memory) const override
            {
                (void)memory;
                return false;
            }
        #endif  // TOPIC_DATA_TYPE_API_HAS_CONSTRUCT_SAMPLE
// MD5对象，可能用于计算数据的MD5值，比如在生成键值等操作中使用
            MD5 m_md5;
            // 用于存储键值等相关数据的缓冲区指针，具体用途根据相关函数操作确定
            unsigned char* m_keyBuffer;
        };
    }
}

#endif // _FAST_DDS_GENERATED_STD_MSGS_MSG_HEADER_PUBSUBTYPES_H_
