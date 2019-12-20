/* Tencent is pleased to support the open source community by making Hippy available.
 * Copyright (C) 2018 THL A29 Limited, a Tencent company. All rights reserved.
 *
 * Licensed under the Apache License, Version 2.0 (the "License");
 * you may not use this file except in compliance with the License.
 * You may obtain a copy of the License at
 *
 *      http://www.apache.org/licenses/LICENSE-2.0
 *
 * Unless required by applicable law or agreed to in writing, software
 * distributed under the License is distributed on an "AS IS" BASIS,
 * WITHOUT WARRANTIES OR CONDITIONS OF ANY KIND, either express or implied.
 * See the License for the specific language governing permissions and
 * limitations under the License.
 */
package com.tencent.mtt.hippy.annotation;

import java.lang.annotation.ElementType;
import java.lang.annotation.Retention;
import java.lang.annotation.Target;

import static java.lang.annotation.RetentionPolicy.RUNTIME;

/**
 * FileName: HippyMethod
 * Description：
 * History：
 */
@Retention(RUNTIME)
@Target(ElementType.METHOD)
public @interface HippyControllerProps
{
	String	NUMBER	= "number";
	String	BOOLEAN	= "boolean";
	String	STRING	= "string";
	String	DEFAULT	= "";
	String	ARRAY	= "array";
	String	MAP		= "map";

	String name() default "name";

	/*
	 * defaultType Number boolean string else default is do not check
	 */
	String defaultType() default DEFAULT;

	double defaultNumber() default 0.0;

	boolean defaultBoolean() default false;

	String defaultString() default DEFAULT;

}
