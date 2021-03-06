//********************************* bs::framework - Copyright 2018-2019 Marko Pintera ************************************//
//*********** Licensed under the MIT license. See LICENSE.md for full terms. This notice is not to be removed. ***********//
#pragma once

#include "BsScriptEnginePrerequisites.h"
#include "BsScriptObject.h"
#include "BsScriptParticleEvolver.generated.h"

namespace bs
{
	class ParticleColor;
	struct __PARTICLE_COLOR_DESCInterop;

	class BS_SCR_BE_EXPORT ScriptParticleColor : public ScriptObject<ScriptParticleColor, ScriptParticleEvolverBase>
	{
	public:
		SCRIPT_OBJ(ENGINE_ASSEMBLY, ENGINE_NS, "ParticleColor")

		ScriptParticleColor(MonoObject* managedInstance, const SPtr<ParticleColor>& value);

		SPtr<ParticleColor> getInternal() const;
		static MonoObject* create(const SPtr<ParticleColor>& value);

	private:
		static void Internal_setOptions(ScriptParticleColor* thisPtr, __PARTICLE_COLOR_DESCInterop* options);
		static void Internal_getOptions(ScriptParticleColor* thisPtr, __PARTICLE_COLOR_DESCInterop* __output);
		static void Internal_create(MonoObject* managedInstance, __PARTICLE_COLOR_DESCInterop* desc);
		static void Internal_create0(MonoObject* managedInstance);
	};
}
