

class PostObserver
{
    public function creating(Post $post)
    {
        $post->user_id = auth()->id();
    }
}




