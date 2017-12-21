﻿/*
* Copyright 2010-2017 Amazon.com, Inc. or its affiliates. All Rights Reserved.
*
* Licensed under the Apache License, Version 2.0 (the "License").
* You may not use this file except in compliance with the License.
* A copy of the License is located at
*
*  http://aws.amazon.com/apache2.0
*
* or in the "license" file accompanying this file. This file is distributed
* on an "AS IS" BASIS, WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either
* express or implied. See the License for the specific language governing
* permissions and limitations under the License.
*/

#pragma once
#include <aws/servicediscovery/ServiceDiscovery_EXPORTS.h>
#include <aws/core/utils/memory/stl/AWSString.h>
#include <aws/core/utils/memory/stl/AWSVector.h>
#include <aws/servicediscovery/model/DnsRecord.h>
#include <utility>

namespace Aws
{
namespace Utils
{
namespace Json
{
  class JsonValue;
} // namespace Json
} // namespace Utils
namespace ServiceDiscovery
{
namespace Model
{

  /**
   * <p>A complex type that contains information about the resource record sets that
   * you want Amazon Route 53 to create when you register an instance.</p><p><h3>See
   * Also:</h3>   <a
   * href="http://docs.aws.amazon.com/goto/WebAPI/servicediscovery-2017-03-14/DnsConfig">AWS
   * API Reference</a></p>
   */
  class AWS_SERVICEDISCOVERY_API DnsConfig
  {
  public:
    DnsConfig();
    DnsConfig(const Aws::Utils::Json::JsonValue& jsonValue);
    DnsConfig& operator=(const Aws::Utils::Json::JsonValue& jsonValue);
    Aws::Utils::Json::JsonValue Jsonize() const;


    /**
     * <p>The ID of the namespace to use for DNS configuration.</p>
     */
    inline const Aws::String& GetNamespaceId() const{ return m_namespaceId; }

    /**
     * <p>The ID of the namespace to use for DNS configuration.</p>
     */
    inline void SetNamespaceId(const Aws::String& value) { m_namespaceIdHasBeenSet = true; m_namespaceId = value; }

    /**
     * <p>The ID of the namespace to use for DNS configuration.</p>
     */
    inline void SetNamespaceId(Aws::String&& value) { m_namespaceIdHasBeenSet = true; m_namespaceId = std::move(value); }

    /**
     * <p>The ID of the namespace to use for DNS configuration.</p>
     */
    inline void SetNamespaceId(const char* value) { m_namespaceIdHasBeenSet = true; m_namespaceId.assign(value); }

    /**
     * <p>The ID of the namespace to use for DNS configuration.</p>
     */
    inline DnsConfig& WithNamespaceId(const Aws::String& value) { SetNamespaceId(value); return *this;}

    /**
     * <p>The ID of the namespace to use for DNS configuration.</p>
     */
    inline DnsConfig& WithNamespaceId(Aws::String&& value) { SetNamespaceId(std::move(value)); return *this;}

    /**
     * <p>The ID of the namespace to use for DNS configuration.</p>
     */
    inline DnsConfig& WithNamespaceId(const char* value) { SetNamespaceId(value); return *this;}


    /**
     * <p>An array that contains one <code>DnsRecord</code> object for each resource
     * record set that you want Amazon Route 53 to create when you register an
     * instance.</p>
     */
    inline const Aws::Vector<DnsRecord>& GetDnsRecords() const{ return m_dnsRecords; }

    /**
     * <p>An array that contains one <code>DnsRecord</code> object for each resource
     * record set that you want Amazon Route 53 to create when you register an
     * instance.</p>
     */
    inline void SetDnsRecords(const Aws::Vector<DnsRecord>& value) { m_dnsRecordsHasBeenSet = true; m_dnsRecords = value; }

    /**
     * <p>An array that contains one <code>DnsRecord</code> object for each resource
     * record set that you want Amazon Route 53 to create when you register an
     * instance.</p>
     */
    inline void SetDnsRecords(Aws::Vector<DnsRecord>&& value) { m_dnsRecordsHasBeenSet = true; m_dnsRecords = std::move(value); }

    /**
     * <p>An array that contains one <code>DnsRecord</code> object for each resource
     * record set that you want Amazon Route 53 to create when you register an
     * instance.</p>
     */
    inline DnsConfig& WithDnsRecords(const Aws::Vector<DnsRecord>& value) { SetDnsRecords(value); return *this;}

    /**
     * <p>An array that contains one <code>DnsRecord</code> object for each resource
     * record set that you want Amazon Route 53 to create when you register an
     * instance.</p>
     */
    inline DnsConfig& WithDnsRecords(Aws::Vector<DnsRecord>&& value) { SetDnsRecords(std::move(value)); return *this;}

    /**
     * <p>An array that contains one <code>DnsRecord</code> object for each resource
     * record set that you want Amazon Route 53 to create when you register an
     * instance.</p>
     */
    inline DnsConfig& AddDnsRecords(const DnsRecord& value) { m_dnsRecordsHasBeenSet = true; m_dnsRecords.push_back(value); return *this; }

    /**
     * <p>An array that contains one <code>DnsRecord</code> object for each resource
     * record set that you want Amazon Route 53 to create when you register an
     * instance.</p>
     */
    inline DnsConfig& AddDnsRecords(DnsRecord&& value) { m_dnsRecordsHasBeenSet = true; m_dnsRecords.push_back(std::move(value)); return *this; }

  private:

    Aws::String m_namespaceId;
    bool m_namespaceIdHasBeenSet;

    Aws::Vector<DnsRecord> m_dnsRecords;
    bool m_dnsRecordsHasBeenSet;
  };

} // namespace Model
} // namespace ServiceDiscovery
} // namespace Aws