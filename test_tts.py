import torchaudio as ta
from chatterbox.tts import ChatterboxTTS

# Load the model (use "cpu" if you don't have a GPU)
model = ChatterboxTTS.from_pretrained(device="cpu")  # or "cpu"

# Text to synthesize
text = "Hello! Welcome to Chatterbox text to speech."

# Generate audio
wav = model.generate(text)

# Save to file
ta.save("output.wav", wav, model.sr)
